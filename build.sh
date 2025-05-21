mkdir -p bin
for file in *.cpp; do
  g++ "$file" -o "bin/$(basename "$file" .cpp)"
done
echo "build complete"
ls bin
