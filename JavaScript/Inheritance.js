
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

class Physician extends User{
  constructor(patientFirstName, patientLastName, patientSerialNumber, patientContactDeatils, DOB, Device, physicianName){
      super(patientFirstName, patientLastName,patientSerialNumber, patientContactDeatils, DOB, Device);
      this.physicianName = physicianName;
  }

}




let patientDetails = new Patient("John","Doe", 12345, 9632587411, "250dec-1996", "NGQ");

console.log(patientDetails);
console.log(patientDetails.getFullName());

let patientDetailsSecond = new Physician("John","Doe", 12345, 9632587411, "250dec-1996", "NGQ","Max");

console.log(patientDetailsSecond);
