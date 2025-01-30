var romanNumber = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
};
function romanToInt(s) {
    var result = 0;
    if (s.length > 15) {
        return 0;
    }
    if (s.length < 1) {
        return 0;
    }
    var isVerified = s
        .split("")
        .every(function (sItem) { var _a; return (_a = Object.keys(romanNumber)) === null || _a === void 0 ? void 0 : _a.includes(sItem); });
    if (!isVerified) {
        return 0;
    }
    var sArray = s.split("");
    for (var i = 0; i <= s.length; i++) {
        if (romanNumber[sArray[i]] < romanNumber[sArray[i + 1]]) {
            result += romanNumber[sArray[i + 1]] - romanNumber[sArray[i]];
        }
        result += romanNumber[sArray[i]];
    }
    return result;
}
