#includes <iostream>
#includes <string>

using namespace std;

int  max_val(int x,int y)
{
	return x>y?x:y
}

int  main (int argc, char** argv)
{
	string str;
	cin>>str;

	int  x = 5, y = 6;
	cout<<max_val(x,y);
	cout<<str;
	return 0;
}