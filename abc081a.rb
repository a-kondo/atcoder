
in_line = gets

count = 0
in_line.chars do |ch| 
  count += 1 if ch == '1'
end
puts(count)