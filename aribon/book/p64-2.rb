def lower_bound(ary, n)
  ary.sort!
  ary.bsearch_index{|x| n <= x }
end

n = gets.to_i
a = gets.split.map!{ |i| i.to_i }

MAX_NUM = 100000
dp = Array.new(n, MAX_NUM)

for i in 0..n-1
  index = lower_bound(dp, a[i])
  dp[index] = a[i]
  p dp
end

puts dp.select{|x| x != MAX_NUM}.size