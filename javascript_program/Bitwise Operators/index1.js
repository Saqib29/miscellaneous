// Read, Write, Execute
// 00000100 <-- Only read persmission
// 00000110 <-- Only read and write permission
// 00000111 <-- Reade, write and execute all permission

const readPermission = 4; // 4 = 00000100
const writePermission = 2; // 2 = 00000010
const executePermission = 1; // 1 = 00000001

let myPermission = 0;
myPermission = myPermission  | writePermission;

let message = myPermission & readPermission ? "Yes" : "No";

console.log(message);