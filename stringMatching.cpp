// #include<iostream>
// using namespace std;
// main() {
//    string str1 = "aabbabababbbaabb";
//    string str2 = "abb";
//    int pos = 0;
//    int index;
//    while((index = str1.find(str2, pos)) != string::npos) {
//       cout << "Match found at position: " << index << endl;
//       pos = index + 1; //new position is from next element of index
//    }
// }

#include<iostream>
using namespace std;
int main()
{

string k="aabcaabdbafabd";
string h= "aab";
int i,j,m=0;
cout << k.length()- h.length();
for(i=0;i<(k.length()-h.length())+1;i++)
{
    for(j=0;j<h.length();j++)
    {
        if(k[i+j]==h[j])
        {
            m++;
        }
        else
        {
        m=0;
        break;
        }
    }
    if(m==h.length())
    {
        m=0;
        cout<< " Matched" << "\n";
    }

}

return 0;
}