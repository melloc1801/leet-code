function uniquePaths(m, n) {
  const dp = new Array(m).fill(new Array(n).fill(1));

  for (let i = 1; i < m; i++) {
    for (let j = 1; j < n; j++) {
      dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
    }
  }

  return dp[m - 1][n - 1];
}
