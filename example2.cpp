#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[] = {2,5,12,7,18,9,0};
    sort (a , a+7);
    for(int i=0;i<7;i++)
        cout << a[i] << " ";
    cout << endl;
}