const romanNumber = {
  I: 1,
  V: 5,
  X: 10,
  L: 50,
  C: 100,
  D: 500,
  M: 1000,
};

function romanToInt(s: string): number {
  let result = 0;
  if (s.length > 15) {
    return 0;
  }

  if (s.length < 1) {
    return 0;
  }

  const isVerified = s
    .split("")
    .every((sItem) => Object.keys(romanNumber)?.includes(sItem));

  if (!isVerified) {
    return 0;
  }

  const sArray = s.split("");

  for (let i = 0; i <= s.length; i++) {
    if (romanNumber[sArray[i]] < romanNumber[sArray[i + 1]]) {
      result += romanNumber[sArray[i + 1]] - romanNumber[sArray[i]];
    }
    result += romanNumber[sArray[i]];
  }

  return result;
}
