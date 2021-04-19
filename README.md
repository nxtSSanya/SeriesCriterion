# SeriesCriterion
Use this code to check your time series for having a trend. This criterion counts all the series and find the maximum subsequence of equal series. After that, our parameters v_n - count of all series and max - maximum of subsequences rates in formulas:
<img src="https://latex.codecogs.com/svg.image?\left\{\begin{matrix}v_n&space;>=&space;\frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max&space;<=&space;t_0&space;\end{matrix}\right." title="\left\{\begin{matrix}v_n >= \frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max <= t_0 \end{matrix}\right." /></br>
In my code you can only check 2 time series.</br>
# Example
y       x
999.5   0.5</br>
1000.4  0.4</br>
1000.7  0.7</br>
1001.7  1.6</br>
1000.3  2.3</br>
1003.7  2.9</br>
1005.9  3</br>
1007.2  3.5</br>
1008    4.1</br>
1008.5  4.7</br>
1010.3  4.7</br>
1009.7  5.5</br>
1010    5.5</br>
1008.3  6</br>
1007.4  6.4</br>
1002.1  6.9</br>
1000.7  7.7</br>
999     8.5</br>
998.3   8.5</br>
998.2   8.7</br>
998.4   9.1</br>
1005.1  9.3</br>
1003.5  9.8</br>
1001.6  8.8</br>
997.4   8.7</br>
996.6   8.6</br>
1001.6  9.8</br>
1003.2  10</br>
1004.1  10.9</br>
1001.7  10.7</br>
1001.8  10.6</br>
1002.8  10.8</br>
1003.6  11.5</br>
1004.4  11.5</br>
1002.6  12.3</br>
1001.1  13</br>
1004.4  13.2</br>
1004.3  12.8</br>
1002.4  14.1</br>
1001.5  14.4</br>
1003    13.6</br>
998.3   13.3</br>
999     13.9</br>
999.2   13</br>
1001.5  12.1</br>
1001.9  13.2</br>
1000.1  13.7</br>
1000.1  13.5</br>
1000    13.9</br>
998.8   14.4</br>
</br>
# Input data
1. First string is the number of data
2. Second string is the name of file with time series Y.(format: *.txt)
Data for time series X is located in file ryad_x.txt, so you can change it in code `std::string::file`

# Output data(for example)

SERII Y</br>
1 1 1 0 1 1 1 1 1 1 0 1 0 0 0 0 0 0 0 1 1 0 0 0 0 1 1 1 0 1 1 1 1 0 0 1 0 0 0 1 0 1 1 1 1 0 1 0 0 1</br>
SERII X</br>
0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 1 1 1 0 0 1 1 1 1 1 1 0 1 1 0 0 1 0 0 1 1 0 1 1 1</br>
TIME SERIES X: YES</br>
TIME SERIES Y: YES</br>
</br>
Program puts "YES" if time series have a trend, else puts "NO".</br>

