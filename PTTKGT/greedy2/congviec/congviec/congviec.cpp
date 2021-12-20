#include <iostream>

using namespace std;

struct CongViec
{
    int Start;
    int End;

};
int main()
{
    CongViec cv[100], tg;
    int n, i, j, d;
    cout << "Nhap so cong viec: ";
    cin >> n;
    cout << "Nhap thoi gian: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> cv[i].Start >> cv[i].End;
    }
    for (i = 0; i < n - 1; i++)  //sap xep
    {
        for (j = i + 1; j < n; j++)
        {
            if ((cv[i].End - cv[i].Start) > (cv[j].End - cv[j].Start))
            {
                tg = cv[i];
                cv[i] = cv[j];
                cv[j] = tg;
            }

        }
        cout << "Danh sach cong viec dc chon: " << endl;
        cout << cv[0].Start << " " << cv[0].End << endl;
        d = 0;
        for (i = 1; i < n; i++)
        {
            if (cv[i].Start >= cv[d].End)
            {
                cout << cv[i].Start << " " << cv[i].End << endl;
                d = i;
            }
        }
    }
}