#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <fstream>

using namespace std;

inline double t(int n) {
	int t0 = 0;
	if (n < 26) t0 = 5;
	else if (n >= 26 && n < 153) t0 = 6;
	else if (n >= 153 && n < 1170) t0 = 7;
	return t0;
}

inline std::vector<int> seriya(const std::vector<double>& a) {
	std::vector<int> is_true;
	size_t n = a.size();
	for (int i = 0; i < n - 1; ++i) {
		if (a[i + 1] >= a[i]) {
			is_true.push_back(1);
		}
		else {
			is_true.push_back(0);
		}
	}
	if (a[n - 1] > 0) {
		is_true.push_back(1);
	}
	return is_true;
}

inline std::pair<int, int> _max(const std::vector<int>& a) {
	int s = 0, max = 0, v_n = 0;
	for (int i = 0; i < a.size() - 1; ++i) {
		if (a[i] == a[i + 1]) {
			++s;
		}
		if (s > max) {
			max = s;
		}
		if (a[i] != a[i + 1]) {
			s = 1;
			++v_n;
		}
	}
	++max;
	++v_n;
	std::pair<int, int> out = { max, v_n };
	return out;
}

int main() {
	std::ios::sync_with_stdio(NULL); std::cin.tie(NULL); std::cout.tie(NULL);
	std::vector<double> y, x_r;
	std::vector<int> is_true;
	double average = 0;
	int n, t0 = 0;
	std::cout << "Enter n: ";
	std::cin >> n;
	t0 = t(n);
	std::cout << "t0 is: " << t0 << std::endl;
	std::string query;
	const std::string file = "ryad_x.txt";
	std::cout << "Enter filename[*.txt]: ";
	std::cin >> query;
	std::ifstream in(query + ".txt"s), in_x(file);
	if (!in.is_open() || !in_x.is_open()) {
		std::cout << "File not found." << std::endl;
		return 0;
	}
	for (int i = 0; i < n; ++i) {
		double a;
		in_x >> a;
		x_r.push_back(a);
	}
	for (int i = 0; i < n; ++i) {
		double a;
		in >> a;
		y.push_back(a);
	}
	is_true = seriya(y);
	std::cout << "y\tx" << std::endl;
	for (size_t i = 0; i < n; ++i) {
		std::cout << y[i] << "\t" << x_r[i] << std::endl;
	}
	std::cout << std::endl << "SERII Y" << std::endl;
	for (auto& i : is_true) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	int s = 0;
	int max = 0;
	int v_n = 0;
	max = _max(is_true).first;
	v_n = _max(is_true).second;

	std::vector<int> ser_x = seriya(x_r);
	std::cout << std::endl << "SERII X" << std::endl;

	for (auto& i : ser_x) {
		std::cout << i << " ";
	}

	std::cout << std::endl << std::endl;
	std::cout << "TIME SERIES X: "s;

	if ((double)_max(ser_x).second >= trunc(0.33 * ((2. * (double)n) - 1.) - 1.96 * sqrt((16 * (double)n - 29) / 90)) && _max(ser_x).first <= t0) {
		std::cout << "NO"s << std::endl;
	}
	else {
		std::cout << "YES"s << std::endl;
	}

	std::cout << "TIME SERIES Y: "s;
	if ((double)v_n >= trunc(0.33 * ((2. * (double)n) - 1.) - 1.96 * sqrt((16 * (double)n - 29) / 90)) && max <= t0){
		std::cout << "NO"s << std::endl;
	}
	else {
		std::cout << "YES"s << std::endl;
	}
	return 0;
}
