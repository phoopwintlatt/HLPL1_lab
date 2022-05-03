/*1. Start a program to work with points, discussed in §10.4. Begin by defining the data type Point that has two coordinate members x and y.
2. Using the code and discussion in §10.4, prompt the user to input seven
(x,y) pairs. As the data is entered, store it in a vector of Points called
original_points.
3. Print the data in original_points to see what it looks like.
4. Open an ofstream and output each point to a file named mydata.txt. On
Windows, we suggest the .txt suffix to make it easier to look at the data
with an ordinary text editor (such as WordPad).
5. Close the ofstream and then open an ifstream for mydata.txt. Read the
data from mydata.txt and store it in a new vector called processed_points.
6. Print the data elements from both vectors.
7. Compare the two vectors and print Something's wrong! if the number of
elements or the values of elements differ.*/

#include "../std_lib_facilities.h"

class Point	//task1
{
public :
	double x, y;
	Point()
	{
		x = 0;
		y = 0;
	}
	
};

istream& operator >>(istream& is, Point& p)
{
    char ch1;
    if (is >> ch1 && ch1 != '(')
    {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2, ch3;
    double x,y;

    is >> x >> ch2 >> y >> ch3;
    if (!is || ch3 != ')' || ch2 != ',')
    {
        if(is.eof()) return is;
        error("Invalid point");
    }

    p.x = x;
    p.y = y;
    return is;
}

ostream& operator <<(ostream& os, Point& p)
{
    return os << '(' << p.x << ',' << p.y << ")\n";
}

void input_from_file(vector<Point>& points, string& filename)
{
    ifstream ist { filename };
    ist.exceptions(ist.exceptions()|ios_base::badbit);

    if(!ist) error("Can't open file ", filename);
    for (Point p; ist >> p; )
        points.push_back(p);
}


bool compare(vector<Point> P1,vector <Point> P2)
{
	bool b = false;
	for (int i = 0;i < 7;i++)
	{
		if (P1[i].x== P2[i].x && P1[i].y == P2[i].y)
			b= true;
		else
		{
			b = false;
			break;
		}
	}
	return b;
}

int main()

{	//task2: prompt and store
    	vector<Point> original_points;
    	cout << "Please input seven (x,y) pairs:\n";

    	for(int i = 0; i < 7; i++)
    {
        Point p;
        cin >> p;
        original_points.push_back(p);
    }

    	//task3: print original points
    	cout << "Original Points are: \n";
    	for (Point p : original_points)
        	cout << p;

    //open ofstream and output in file    
    string filename = "mydata.txt";
    ofstream ost { filename };
    if(!ost) error("Could not open file ", filename);

    for(Point p : original_points)
        ost << p;
    ost.close(); //close ofstream

    //read and store in the new vector
    vector<Point> processed_points;
    input_from_file(processed_points, filename);
    
    //print new vector points
    cout << "Points from processed_points vector: \n";
    for (Point p : processed_points)
        cout << p;
        
    //compare two vectors
    if (compare(original_points, processed_points) == true)
		cout << "The Same!\n";
	else
		cout << "Something's wrong!\n";

	return 0;
}
