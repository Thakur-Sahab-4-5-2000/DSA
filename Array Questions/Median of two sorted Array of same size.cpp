#include "bits/stdc++.h"
using namespace std;

int Median(vector<int> num1, vector<int> num2)
{
    int m1 = -1, m2 = -1, i = 0, j = 0, count = 0;

    for (count = 0; count <= num1.size(); count++)
    {
        if (i == num1.size())
        {
            m1 = m2;
            m2 = num2[0];
            break;
        }
        else if (j == num1.size())
        {
            m1 = m2;
            m2 = num1[0];
        }

        if (num1[i] <= num2[j])
        {
            m1 = m2;
            m2 = num1[i];
            i++;
        }
        else
        {
            m1 = m2;
            m2 = num2[j];
            j++;
        }
    }
    return (m1 + m2) / 2;
}

int main()
{
    vector<int> num1 = {1, 2, 3, 6};
    vector<int> num2 = {4, 6, 8, 10};
    cout << Median(num1, num2);
    return 0;
}

// int median(int [], int);

// int getMedian(int ar1[],
// 			int ar2[], int n)
// {
// 	/* return -1 for
// 	invalid input */
// 	if (n <= 0)
// 		return -1;
// 	if (n == 1)
// 		return (ar1[0] +
// 				ar2[0]) / 2;
// 	if (n == 2)
// 		return (max(ar1[0], ar2[0]) +
// 				min(ar1[1], ar2[1])) / 2;

// 	/* get the median of
// 	the first array */
// 	int m1 = median(ar1, n);

// 	/* get the median of
// 	the second array */
// 	int m2 = median(ar2, n);

// 	/* If medians are equal then
// 	return either m1 or m2 */
// 	if (m1 == m2)
// 		return m1;

// 	/* if m1 < m2 then median must
// 	exist in ar1[m1....] and
// 				ar2[....m2] */
// 	if (m1 < m2)
// 	{
// 		if (n % 2 == 0)
// 			return getMedian(ar1 + n / 2 - 1,
// 							ar2, n - n / 2 + 1);
// 		return getMedian(ar1 + n / 2,
// 						ar2, n - n / 2);
// 	}

// 	if (n % 2 == 0)
// 		return getMedian(ar2 + n / 2 - 1,
// 						ar1, n - n / 2 + 1);
// 	return getMedian(ar2 + n / 2,
// 					ar1, n - n / 2);
// }

// int median(int arr[], int n)
// {
// 	if (n % 2 == 0)
// 		return (arr[n / 2] +
// 				arr[n / 2 - 1]) / 2;
// 	else
// 		return arr[n / 2];
// }

// int main()
// {
// 	int ar1[] = {1, 2, 3, 6};
// 	int ar2[] = {4, 6, 8, 10};
// 	int n1 = sizeof(ar1) /
// 			sizeof(ar1[0]);
// 	int n2 = sizeof(ar2) /
// 			sizeof(ar2[0]);
// 	if (n1 == n2)
// 		cout << "Median is "
// 			<< getMedian(ar1, ar2, n1);
// 	else
// 		cout << "Doesn't work for arrays "
// 			<< "of unequal size";
// 	return 0;
// }
