inputs = gets.split(' ')
n = inputs[0]
a = inputs[1].to_i
b = inputs[2].to_i

nums = []
size = n.to_i
for num in 1..size
  num_sum = 0
  num_str = num.to_s
  for j in 0..num_str.size-1
    num_sum += num_str[j].to_i
  end
  if a <= num_sum and num_sum <= b then
    nums << num
  end
end

sum = 0
nums.each do |num|
  sum += num
end
puts sum