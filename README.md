# SeriesCriterion
Use this code to check your time series for having a trend. This criterion counts all the series and find the maximum subsequence of equal series. After that, our parameters v_n - count of all series and max - maximum of subsequences rates in formulas:
<img src="https://latex.codecogs.com/svg.image?\left\{\begin{matrix}v_n&space;>=&space;\frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max&space;<=&space;t_0&space;\end{matrix}\right." title="\left\{\begin{matrix}v_n >= \frac{1}{3}*(2*n-1)-1.96*\sqrt{\frac{16*n-29}{90}}\\max <= t_0 \end{matrix}\right." />
