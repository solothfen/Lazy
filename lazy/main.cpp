#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int x1,x2,x3;
    int p1 = 0,p2 = 0,p3 = 0;
    int n = 3;
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int mon = 1+ltm->tm_mon;
    int day = ltm->tm_mday;
    while(n--){
        cin >> x1 >> x2 >> x3;
        p1+=x1;
        p2+=x2;
        p3+=x3;
    }
    cout << "计算机科学与工程学院" << mon << "月" << day << "日情况汇报：" << endl;
    cout << "应在校"<< p1 << "人" << endl;
    cout << "实在校"<< p2 << "人" << endl;
    cout << p3 << "人因实习，回家等原因暂时离校" << endl;
    return 0;
}
