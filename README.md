# SeriesCriterion
Use this code to check your time series for having a trend. This criterion counts all the series and find the maximum subsequence of equal series. After that, our parameters v_n - count of all series and max - maximum of subsequences rates in formula:
$$ v_n >=\frac{1}{3}$ * (2n-1) - 1.96*$\sqrt{\frac{16*n-29}{90}$}$, $$
and
$$ max <= t_0, $$
\sqrt{\frac{16*n-29}{90}}
