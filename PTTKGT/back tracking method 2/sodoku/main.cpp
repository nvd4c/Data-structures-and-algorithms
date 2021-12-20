#include <iostream>

using namespace std;

#define N 9 // 3 x 3 = 9

void res(int arr[N][N])    //print grid
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Kiểm tra xem việc gán số cho hàng, cột đã cho có hợp lệ hay không
bool check(int grid[N][N], int row, int col, int num)
{

    // Kiểm tra nếu tìm thấy cùng một số trong một hàng tương tự, trả về false
    for (int x = 0; x <= 8; x++)
    {
        if (grid[row][x] == num)
        {
            return false;
        }
    }

    // Kiểm tra nếu tìm thấy cùng một số trong một cột tương tự, trả về false
    for (int x = 0; x <= 8; x++)
    {
        if (grid[x][col] == num)
        {
            return false;
        }
    }
    // Kiểm tra nếu tìm thấy cùng một số trong một ma trận 3x3, trả về false
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i + startRow][j + startCol] == num)
            {
                return false;
            }
        }
    }
    return true;
}

/* Sử dụng lưới được điền một phần và cố gắng
gán giá trị cho tất cả các vị trí chưa được chỉ định
theo cách để đáp ứng các yêu cầu đối với
giải pháp Sudoku (không trùng lặp trên các hàng, cột và hộp) */
bool solveSudoko(int grid[N][N], int row, int col)
{
    // Kiểm tra xem đã đến hàng thứ 8 và cột thứ 9 (0 indexed matrix) hay chưa,
    // trả về true để tránh bị tiep tuc quay lui
    if (row == N - 1 && col == N)
    {
        return true;
    }

    // Kiểm tra nếu giá trị cột trở thành 9, chuyển sang hàng tiếp theo và cột bắt đầu từ 0
    if (col == N)
    {
        row++;
        col = 0;
    }

    // Kiểm tra xem vị trí hiện tại của lưới đã chứa giá trị > 0 chưa, lặp lại cho cột tiếp theo
    if (grid[row][col] > 0)
    {
        return solveSudoko(grid, row, col + 1);
    }
    for (int num = 1; num <= N; num++)
    {

        // Kiểm tra xem có an toàn không khi đặt số (1-9) vào hàng, cột đã cho -> chuyển sang cột tiếp theo
        if (check(grid, row, col, num))
        {

            //Gán số ở vị trí (hàng, cột) hiện tại của lưới và giả sử số đã chỉ định ở vị trí là chính xác
            grid[row][col] = num;

            // Kiểm tra khả năng tiếp theo với cột tiếp theo
            if (solveSudoko(grid, row, col + 1))
            {
                return true;
            }
        }

        // Loại bỏ số đã chỉ định, vì giả định nay là sai
        // và chuyển sang giả định tiếp theo với giá trị số khác
        grid[row][col] = 0;
    }
    return false;
}

int main()
{
    int grid[N][N] = { { 0, 0, 0, 2, 6, 0, 7, 0, 1 },
                       { 6, 8, 0, 0, 7, 0, 0, 9, 0 },
                       { 1, 9, 0, 0, 0, 4, 5, 0, 0 },
                       { 8, 2, 0, 1, 0, 0, 0, 4, 0 },
                       { 0, 0, 4, 6, 0, 2, 9, 0, 0 },
                       { 0, 5, 0, 0, 0, 3, 0, 2, 8 },
                       { 0, 0, 9, 3, 0, 0, 0, 7, 4 },
                       { 0, 4, 0, 0, 5, 0, 0, 3, 6 },
                       { 7, 0, 3, 0, 1, 8, 0, 0, 0 } };

    if (solveSudoko(grid, 0, 0))
    {
        res(grid);
    }
    else
    {
        cout << "Khong ton tai giai phap " << endl;
    }
    return 0;
}