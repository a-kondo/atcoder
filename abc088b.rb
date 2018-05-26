
n = gets.to_i
nums_str = gets.split(' ')

nums = []
nums_str.each do |num|
  nums << num.to_i
end

alice = []
bob = []
nums.sort! do |a,b| b <=> a end
for i in 0..nums.size-1
  if i%2 == 0 then
    alice << nums[i]
  else
    bob << nums[i]
  end
end

sum_alice = 0
alice.each do |point|
  sum_alice += point
end
sum_bob = 0
bob.each do |point|
  sum_bob += point
end

puts sum_alice - sum_bob