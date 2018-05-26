n = gets.to_i

d_s = []
for i in 0..n-1
  d_s << gets.to_i
end

d_s.sort! do |a,b| a <=> b end

now = 0
count = 0
d_s.each do |moti|
  if now < moti then
    now = moti
    count += 1
  end
end

puts count