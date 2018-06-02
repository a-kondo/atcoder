n = gets.to_i
a = gets.split.map!{|i| i.to_i}
m = gets.split.map!{|i| i.to_i}
K = gets.to_i

def p_dp(dp)
  p dp
end

dp = Array.new(K+1, -1)
dp[0] = 0
for i in 0..n-1
  puts "-- #{i} --"
  for j in 0..K
    puts "---- #{j} ----"
    if dp[j] >= 0
      dp[j] = m[i]
    elsif j < a[i] or dp[j - a[i]] <= 0
      dp[j] = -1
    else
      dp[j] = dp[j - a[i]] - 1
    end
    p_dp(dp)
  end
end

puts "YES" if dp[K] >= 0