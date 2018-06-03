n = gets.to_i
a = gets.split.map!{ |i| i.to_i }

dp = Array.new(n)

res = 0
for i in 0..n-1
  dp[i] = 1
  puts "init #{i}, dp; #{dp}"
  for j in 0..i-1
    if a[j] < a[i] then
      dp[i] = dp[i] < dp[j]+1 ? dp[j]+1 : dp[i]
      puts "i: #{i}, j: #{j}, dp: #{dp}"
    end
    res = res < dp[i] ? dp[i] : res 
  end
end

puts res