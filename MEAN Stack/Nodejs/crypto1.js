const crypto = require('crypto');
const secret = 'abcdefg';

const hash = crypto.createHmac('sha256', secret)
                    .update('Welcome to javatpoint')
                    .digest('hex');
console.log(hash);