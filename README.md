# SeriesCriterion
Use this code to check your time series for having a trend. This criterion counts all the series and find the maximum subsequence of equal series. After that, our parameters v_n - count of all series and max - maximum of subsequences rates in formulas:
<img src="https://latex.codecogs.com/svg.image?\left\{\begin{matrix}v_n&space;>=&space;\frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max&space;<=&space;t_0&space;\end{matrix}\right." title="\left\{\begin{matrix}v_n >= \frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max <= t_0 \end{matrix}\right." />
In my code you can only check 2 time series.
#Example
y       x
999.5   0.5
1000.4  0.4
1000.7  0.7
1001.7  1.6
1000.3  2.3
1003.7  2.9
1005.9  3
1007.2  3.5
1008    4.1
1008.5  4.7
1010.3  4.7
1009.7  5.5
1010    5.5
1008.3  6
1007.4  6.4
1002.1  6.9
1000.7  7.7
999     8.5
998.3   8.5
998.2   8.7
998.4   9.1
1005.1  9.3
1003.5  9.8
1001.6  8.8
997.4   8.7
996.6   8.6
1001.6  9.8
1003.2  10
1004.1  10.9
1001.7  10.7
1001.8  10.6
1002.8  10.8
1003.6  11.5
1004.4  11.5
1002.6  12.3
1001.1  13
1004.4  13.2
1004.3  12.8
1002.4  14.1
1001.5  14.4
1003    13.6
998.3   13.3
999     13.9
999.2   13
1001.5  12.1
1001.9  13.2
1000.1  13.7
1000.1  13.5
1000    13.9
998.8   14.4
#Input data
1. First string is the number of data
2. Second string is the name of file with time series Y.(format: *.txt)
Data for time series X is located in file ryad_x.txt, so you can change it in code `std::string::file`

#Output data(for example)

SERII Y
1 1 1 0 1 1 1 1 1 1 0 1 0 0 0 0 0 0 0 1 1 0 0 0 0 1 1 1 0 1 1 1 1 0 0 1 0 0 0 1 0 1 1 1 1 0 1 0 0 1
SERII X
0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 1 1 1 0 0 1 1 1 1 1 1 0 1 1 0 0 1 0 0 1 1 0 1 1 1
TIME SERIES X: YES
TIME SERIES Y: YES

Program puts "YES" if time series have a trend, else puts "NO".

