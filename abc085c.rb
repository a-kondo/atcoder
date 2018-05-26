input = gets.split(' ')
n = input[0].to_i
y = input[1].to_i

for i in 0..n
  for j in 0..n
    k = n - i - j
    if(10000*i + 5000*j + 1000*k == y) and (k >= 0) then
      puts "#{i} #{j} #{k}"
      exit
    end
  end
end

puts "-1 -1 -1"