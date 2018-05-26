

=begin
n = gets.chop
t = Array.new(n)
for i in 0..n-1
  t[i] = gets.to_i
end
=end

n = 5

bit = 0
while(bit < (1<<n)) do
  s = []
  for i in 0..n-1
    if(0 != (bit & (1<<i))) then
      # puts "bit: #{bit}, i:#{i}"
      s << i
    end
  end

  puts "#{bit}: #{s}"

  bit += 1
end