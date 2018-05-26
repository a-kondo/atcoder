def max(a, b)
  puts "in max: #{a}, #{b}"
  return a < b ? b : a
end

def p_dp(dp, i, w)
  for j in 0..dp.size-1
    puts "i: #{i}, w: #{w}, #{j}:#{dp[j]}"
  end
end

n, w_max = gets.split.map do |elm| elm.to_i end

weight = Array.new(n)
value = Array.new(n)
for i in 0..n-1
  value[i], weight[i] = gets.split.map do |elm| elm.to_i end
end

W_MAX = 17 # 10010
N_MAX = 12 # 110
dp = Array.new(N_MAX){Array.new(W_MAX, 0)}
for i in 0..W_MAX-1
  dp[0][i] = 0
end

for i in 0..n-1
  for w in 0..w_max
    if(w >= weight[i]) then 
      dp[i+1][w] = 
        max(dp[i][w-weight[i]] + value[i], dp[i][w])
    else
      dp[i+1][w] = dp[i][w]
    end
    p_dp(dp, i, w)
  end
end

puts "-----"
p_dp(dp, 0, 0)
puts "-----"
puts "ret: #{dp[n][w_max]}"