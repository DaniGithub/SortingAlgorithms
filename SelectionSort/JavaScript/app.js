var unsorted = [];

for (let i = 0; i < 10000; i++) {
  unsorted[i] = Math.floor(Math.random() * 11);
}

for (let j = 0; j < unsorted.length; j++) {
  let min = j;

  for (let i = j + 1; i < unsorted.length; i++) {
    if (unsorted[i] < unsorted[min]) {
      min = i;
    }
  }

  if (min != j) {
    [unsorted[j], unsorted[min]] = [unsorted[min], unsorted[j]]
  }
}

console.log(unsorted);