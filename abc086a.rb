
in_line = gets
lines = in_line.split(' ')
a = lines[0].to_i
b = lines[1].to_i

if ((a * b) % 2) == 0 then
  puts 'Even'
else
  puts 'Odd'
end