n = gets.to_i
points = Array.new(n)
for i in 0..n-1
  points[i] = gets.split(' ').map do |it| it.to_i end
end

max = 0
for i in 0..n-1
  for j in i..n-1
    x = 0
    if points[i][0] < points[j][0] then
      x = points[j][0] - points[i][0]
    else
      x = points[i][0] - points[j][0]
    end
    y = 0
    if points[i][1] < points[j][1] then
      y = points[j][1] - points[i][1]
    else
      y = points[i][1] - points[j][1]
    end
    temp = (x*x + y*y)**(1/2.0)
    if max < temp then
      max = temp
    end
  end
end

puts max