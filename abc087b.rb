
in_line = gets
a = in_line.to_i
in_line = gets
b = in_line.to_i
in_line = gets
c = in_line.to_i
in_line = gets
x = in_line.to_i

count = 0
for i in 0..a
  for j in 0..b
    for k in 0..c
      count += 1 if (500 * i + 100 * j + 50 * k == x)
    end
  end
end
puts count