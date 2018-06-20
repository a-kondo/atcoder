n = gets.to_i
m = gets.to_i
M = gets.to_i

MAX_M = 5
MAX_N = 5

dp = Array.new(MAX_M+1){Array.new(MAX_N+1, 0)}

dp[0][0] = 1
for i in 1..m
  for j in 0..n
    if j - i >= 0 then
      dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % M
    else
      dp[i][j] = dp[i-1][j]
    end
    puts "aft:"
    p dp
  end
end

puts dp[m][n]
