const belowTwenty = [
    '', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten',
    'Eleven', 'Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen', 'Seventeen', 'Eighteen', 'Nineteen'
];

const tens = ['', '', 'Twenty', 'Thirty', 'Forty', 'Fifty', 'Sixty', 'Seventy', 'Eighty', 'Ninety'];

const thousands = ['', 'Thousand', 'Million', 'Billion'];

function numberToWords(num) {
    if (num === 0) return 'Zero';

    let result = '';
    let index = 0;

    while (num > 0) {
        if (num % 1000 !== 0) {
            result = helper(num % 1000) + thousands[index] + ' ' + result;
        }
        num = Math.floor(num / 1000);
        index++;
    }

    return result.trim();
}

function helper(num) {
    if (num === 0) return '';
    if (num < 20) return belowTwenty[num] + ' ';
    if (num < 100) return tens[Math.floor(num / 10)] + ' ' + helper(num % 10);
    return belowTwenty[Math.floor(num / 100)] + ' Hundred ' + helper(num % 100);
}

