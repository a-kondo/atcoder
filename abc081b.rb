
in_line = gets
N = in_line.to_i

in_line = gets
nums = []
lines = in_line.split(' ')
for i in 0..N-1
  nums << lines[i].to_i
end

count = 0
while(true)
  for i in 0..N-1
    if nums[i]%2 != 0 then
      puts count
      exit
    end
    nums[i] = nums[i] / 2
  end
  count += 1
end