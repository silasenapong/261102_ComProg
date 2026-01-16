#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// ฟังก์ชันหา Determinant ด้วย Recursion
double findDet(vector<vector<double>> mat)
{
    int n = mat.size();

    // Base Case: ถ้า Matrix ขนาด 1x1
    if (n == 1)
        return mat[0][0];

    // Base Case: ถ้า Matrix ขนาด 2x2 (ช่วยให้เร็วขึ้น)
    if (n == 2)
    {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    }

    double det = 0;
    int sign = 1; // เครื่องหมายสลับ + - +

    // วนลูปกระจายตามแถวที่ 0
    for (int j = 0; j < n; j++)
    {
        // สร้าง Sub-matrix (Minor) โดยการตัดแถวที่ 0 และคอลัมน์ที่ j ออก
        vector<vector<double>> subMat;
        for (int i = 1; i < n; i++)
        {
            vector<double> row;
            for (int k = 0; k < n; k++)
            {
                if (k != j)
                {
                    row.push_back(mat[i][k]);
                }
            }
            subMat.push_back(row);
        }

        // สูตร: det = sum( sign * element * det(subMatrix) )
        det += sign * mat[0][j] * findDet(subMat);
        sign = -sign; // สลับเครื่องหมายสำหรับคอลัมน์ถัดไป
    }

    return det;
}

int main()
{
    int n;
    cout << "Enter matrix size (n x n): ";
    cin >> n;

    vector<vector<double>> matrix(n, vector<double>(n));

    cout << "Enter elements row by row:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "\nDeterminant is: " << findDet(matrix) << endl;

    return 0;
}