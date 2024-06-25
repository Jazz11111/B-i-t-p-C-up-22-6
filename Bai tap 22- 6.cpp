//// Bài 5
//#include <iostream>
//using namespace std;

//bool isPrime(int num) {
//    if (num <= 1) return false;
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//int main() {
//    int n;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    cout << "Cac so nguyen to tu 1 den " << n << " la: ";
//    for (int i = 1; i <= n; i++) {
//        if (isPrime(i)) {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}

// Bài 6

//int main() {
//    for (int i = 1; i <= 9; i++) {
//        for (int j = 1; j <= 9; j++) {
//            cout << i << " x " << j << " = " << i * j << endl;
//        }
//        cout << endl;
//    }
//    return 0;
//}

// Bài 7

//int main() {
//    int n, reversedNumber = 0;
//    cout << "Nhap so nguyen n: ";
//    cin >> n;
//    while (n != 0) {
//        int digit = n % 10;
//        reversedNumber = reversedNumber * 10 + digit;
//        n /= 10;
//    }
//    cout << "So dao nguoc la: " << reversedNumber << endl;
//    return 0;
//}

//Bài 8

//int main() {
//    int n;
//    cout << "Nhap so nguyen duong n: ";
//    cin >> n;
//    int a = 0, b = 1;
//    for (int i = 1; i <= n; i++) {
//        cout << a << " ";
//        int temp = a;
//        a = b;
//        b = temp + b;
//    }
//    cout << endl;
//    return 0;
//}

// Bài 9

//int main() {
//    int x;
//    cout << "Nhap so nguyen duong x: ";
//    cin >> x;
//    long long factorial = 1;
//    for (int i = 1; i <= x; i++) {
//        factorial *= i;
//    }
//    cout << "Giai thua cua " << x << " la: " << factorial << endl;

//Bài 10

//int main() {
//    int n;
//    cout << "Nhap so nguyen duong n: ";
//    cin >> n;
//    int sum = 0;
//    for (int i = 1; i < n; i++) {
//        if (n % i == 0) {
//            sum += i;
//        }
//    }
//    if (sum == n) {
//        cout << n << " la so hoan hao." << endl;
//    } else {
//        cout << n << " khong phai la so hoan hao." << endl;
//    }
//    return 0;
//}


//Bài 11

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Nhap so nguyen duong n: ";
//    cin >> n;
//    double S = 1.0;
//    for (int i = 2; i <= n; i++) {
//        S += 1.0 / pow(i, 3);
//    }
//    cout << fixed << setprecision(5);
//    cout << "Gia tri cua bieu thuc S la: " << S << endl;
//    return 0;
//}



