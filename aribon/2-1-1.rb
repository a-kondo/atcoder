n = gets.to_i
t = Array.new(n)
for i in 0..n-1
  t[i] = gets.to_i
end

bit = 0
min = 200
while(bit < (1<<n)) do
  t0 = t1 = 0
  for i in 0..n-1
    if(0 != (bit & (1<<i))) then
      t1 += t[i]
    else
      t0 += t[i]
    end
  end

  which_t = t0 < t1 ? t1: t0
  if min > which_t then
    min = which_t
  end 
  bit += 1
end

puts min