//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//void PrintSizeAndContent(const vector<int> &iVec)
//{
//	cout << "size : " << iVec.size() << "\t";
//	cout << "content : ";
//	for(auto it = iVec.begin();it!=iVec.end();++it)
//		cout << *it << "��";
//	cout << endl;
//}
//
//void PrintSizeAndContent(const vector<string> &strVec)
//{
//	cout << "size : " << strVec.size() << "\t";;
//	cout << "content : ";
//	for (auto it = strVec.begin(); it != strVec.end(); ++it)
//	{
//		if ( *it == "")
//			cout << "null";
//		cout << *it << ",";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	vector<int> v1;
//	vector<int> v2(10);
//	vector<int> v3(10, 42);
//	vector<int> v4{ 10 };
//	vector<int> v5{ 10, 42 };
//	vector<string> v6{ 10 };
//	vector<string> v7{ 10, "hi" };
//
//	PrintSizeAndContent(v1);
//	PrintSizeAndContent(v2);
//	PrintSizeAndContent(v3);
//	PrintSizeAndContent(v4);
//	PrintSizeAndContent(v5);
//	PrintSizeAndContent(v6);
//	PrintSizeAndContent(v7);
//	return 0;
//}