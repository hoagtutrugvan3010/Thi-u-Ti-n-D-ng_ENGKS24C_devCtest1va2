#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Hàm nhập mảng 2D
void nhapMang(vector<vector<int>>& arr, int& n, int& m) {
    cout << "Nhập số dòng: ";
    cin >> n;
    cout << "Nhập số cột: ";
    cin >> m;
    arr.resize(n, vector<int>(m));
    cout << "Nhập các phần tử của mảng:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
}

// Hàm in mảng dưới dạng ma trận
void inMang(const vector<vector<int>>& arr, int n, int m) {
    cout << "Mảng dưới dạng ma trận:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Hàm in phần tử trên biên và tính tích
void inBienTinhTich(const vector<vector<int>>& arr, int n, int m) {
    long long tich = 1;
    cout << "Các phần tử trên đường biên: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                cout << arr[i][j] << " ";
                tich *= arr[i][j];
            }
        }
    }
    cout << "\nTích của các phần tử trên biên: " << tich << endl;
}

// Hàm in đường chéo chính
void inCheoChinh(const vector<vector<int>>& arr, int n, int m) {
    cout << "Các phần tử trên đường chéo chính: ";
    for (int i = 0; i < min(n, m); i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;
}

// Hàm in đường chéo phụ
void inCheoPhu(const vector<vector<int>>& arr, int n, int m) {
    cout << "Các phần tử trên đường chéo phụ: ";
    for (int i = 0; i < min(n, m); i++) {
        cout << arr[i][m - i - 1] << " ";
    }
    cout << endl;
}

// Hàm sắp xếp đường chéo chính tăng dần
void sapXepCheoChinh(vector<vector<int>>& arr, int n, int m) {
    vector<int> cheoChinh;
    for (int i = 0; i < min(n, m); i++) {
        cheoChinh.push_back(arr[i][i]);
    }
    sort(cheoChinh.begin(), cheoChinh.end());
    for (int i = 0; i < min(n, m); i++) {
        arr[i][i] = cheoChinh[i];
    }
    cout << "Đường chéo chính sau khi sắp xếp tăng dần.\n";
}

// Hàm tìm kiếm phần tử
void timKiem(const vector<vector<int>>& arr, int n, int m) {
    int x;
    cout << "Nhập phần tử cần tìm: ";
    cin >> x;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == x) {
                cout << "Phần tử " << x << " được tìm thấy tại vị trí (" << i << ", " << j << ")\n";
                found = true;
            }
        }
    }
    if (!found) {
        cout << "Phần tử " << x << " không tồn tại trong mảng.\n";
    }
}

int main() {
    vector<vector<int>> arr;
    int n = 0, m = 0;
    int choice;

    do {
        cout << "\nMENU\n";
        cout << "1. Nhập kích cỡ và giá trị các phần tử của mảng\n";
        cout << "2. In giá trị các phần tử của mảng theo ma trận\n";
        cout << "3. In ra các phần tử nằm trên đường biên và tính tích\n";
        cout << "4. In ra các phần tử nằm trên đường chéo chính\n";
        cout << "5. In ra các phần tử nằm trên đường chéo phụ\n";
        cout << "6. Sắp xếp đường chéo chính theo thứ tự tăng dần\n";
        cout << "7. Tìm kiếm một phần tử và in ra vị trí của phần tử đó trong mảng\n";
        cout << "8. Thoát\n";
        cout << "Lựa chọn của bạn: ";
        cin >> choice;

        switch (choice) {
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inBienTinhTich(arr, n, m);
                break;
            case 4:
                inCheoChinh(arr, n, m);
                break;
            case 5:
                inCheoPhu(arr, n, m);
                break;
            case 6:
                sapXepCheoChinh(arr, n, m);
                break;
            case 7:
                timKiem(arr, n, m);
                break;
            case 8:
                cout << "Chương trình kết thúc.\n";
                break;
            default:
                cout << "Lựa chọn không hợp lệ. Vui lòng chọn lại.\n";
        }
    } while (choice != 8);

    return 0;
}


