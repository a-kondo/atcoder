n = gets.to_i
a = gets.split.map!{|i| i.to_i}
m = gets.split.map!{|i| i.to_i}
K = gets.to_i

def p_dp(dp)
  puts "--"
  dp.each do |dp_i|
    dp_i.each do |dp_w|
      if dp_w == false then
        print "F "
      elsif dp_w.nil? then
        print "n "
      elsif dp_w == true then
        print "T "
      end
    end
    puts
  end
  puts "--"
end

dp = Array.new(n+1){Array.new(K+1)}

dp[0][0] = true
for i in 0..n-1
  puts "--- #{i} ---"
  for j in 0..K
    k = 0
    while k <= m[i] and k*a[i] <= j
      print "k"
      dp[i+1][j] |= dp[i][j - k*a[i]] 
      k += 1
    end
    p_dp(dp)
  end
end

puts "YES" if dp[n][k]