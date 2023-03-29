remove :: Int -> [a] -> [a]
remove _ [] = [] -- recursive function
remove 0 (x:xs) = xs -- if 0th index then return the list except the first element
remove n (x:xs) = x : remove (n-1) xs -- if nth index then make recursive call till it finds nth index element

-- main function
main :: IO ()
main = do
-- function calls and print the result
print(remove 0 [1,2,3,4,5,6])
print(remove 2 [1,2,3,4,5,6])
print(remove 5 [1,2,3,4,5,6])