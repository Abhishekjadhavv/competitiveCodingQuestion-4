#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int n, m;
  cout << "Enter size of first array and second array" << endl;
  cin >> m >> n;
  int num1[m], num2[n];

  cout << "Enter " << m << " numbers in first array" << endl;
  for (int i = 0; i < m; i++)
  {
    cin >> num1[i];
  }
  
  cout << "Enter " << n << " numbers in second array" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> num2[i];
  }

  int size = (m + n) / 2;

  if ((m + n) % 2 == 0)
  {
    if (m == size && n == size)
      cout << "Median is " << (num1[size - 1] + num2[abs(n - size)]) / 2.0 << endl;
    else if (m > size)
      cout << "Median is " << (num1[size - 1] + num1[size]) / 2.0 << endl;
    else
      cout << "Median is " << (num2[abs(size - m)] + num2[abs(size - m - 1)]) / 2.0 << endl;
  }
  else
  {
    if (m - 1 >= size)
    {
      cout << "Median is " << num1[size] << endl;
      return 0;
    }
    cout << "Median is " << num2[abs(m - size)] << endl;
  }

  return 0;
}