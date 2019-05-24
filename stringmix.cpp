/*
Name: Sahana Ramesh
Student ID: 013832065
Grade ID: 52
*/

#include <string>
using namespace std;

string mix (string a , string b){
string res;
int max=0;
if (a.size()>b.size()){
	max=a.size();
}else{
	max = b.size();
}

for (int i=0; i< max; i++){
    if (i<a.size()){
        res += a[i];
    }

    if (i<b.size()){
        res += b[i];
    }
}

return res;
}