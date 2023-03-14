// input
// 1 2 3
// 4 5 6 7 8
// 2 3

// output the sum of elements in each row
// 6
// 30
// 5

string line;
while (getline(cin, line)) {
    stringstream ss(line);
    int sum = 0;
    int x;
    while (ss >> x) sum += x;
    cout << sum << endl;
}