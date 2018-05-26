s = gets.chop!

t =[
  "dream",
  "dreamer",
  "erase",
  "eraser"
]

s.reverse!
t.each do |item|
  item.reverse!
end

c_i = 0
i = 0
while(i < t.size)
  for j in 0..t[i].size-1
    if s[c_i+j] != t[i][j] then 
      i += 1
      break
    end
    if j == t[i].size-1 then 
      c_i += t[i].size
      i = 0
      break
    end
  end

  if i == t.size then
    puts 'NO'
    exit
  elsif c_i == s.size then
    puts 'YES'
    exit
  end
end