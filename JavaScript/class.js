
class Patient{

    constructor(patientFirstName, patientLastName, patientSerialNumber, patientContactDeatils, DOB, Device ){
        this.patientFirstName = patientFirstName;
        this.patientLastName = patientLastName;
        this.patientSerialNumber= patientSerialNumber;
        this.patientContactDeatils = patientContactDeatils;
        this.DOB = DOB;
        this.Device = Device;
    }
    getFullName() {
        var fullName = `My full name is ${this.patientFirstName} ${this.patientLastName}`;
        return fullName;
    }

} 

let patientDetails = new Patient("John","Doe", 12345, 9632587411, "250dec-1996", "NGQ");

console.log(patientDetails);
console.log(patientDetails.getFullName()); 