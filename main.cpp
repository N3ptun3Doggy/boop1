#include <iostream>

#include <vector>

using namespace std;

int main(){
    long n, start, end, emax, summ, need;
    cout << "Put: ";
    cin >> n;
    summ=0;
    need=0;
    vector <int> a(100000000);
    for (int i = 0; i < n; i++){
        cin >> start >> end;
        a[start]+=1;
        a[end]-=1;
    }
    for (long i=0; i<10000000; i++){
        summ+=a[i];
        if(summ > need)need = summ;
    }
    cout << "Output: " << need;

    return 0;
}
