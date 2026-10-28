#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int id;
    int chinese;
    int total;
};

bool cmp(Student x, Student y)
{
    if (x.total != y.total)
    {
        return x.total > y.total;
    }
    if (x.chinese != y.chinese)
    {
        return x.chinese > y.chinese;
    }
    return x.id < y.id;
}

int main()
{
    int n;
    cin >> n;
    vector<Student> a(n);

    for (int i = 0; i < n; i++)
    {
        int chinese, math, english;
        cin >> chinese >> math >> english;
        a[i].total = chinese + math + english;
        a[i].chinese = chinese;
        a[i].id = i + 1;
    }

    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < 5; i++)
    {
        cout << a[i].id << ' ' << a[i].total << '\n';
    }
    return 0;
}
