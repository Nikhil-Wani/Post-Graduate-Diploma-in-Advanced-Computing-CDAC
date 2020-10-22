import { Person } from "../person";
import { Component } from '@angular/core';
import { PersonService } from "../person.service";
@Component({
    selector:"ptab",
    templateUrl:"./person.component.html",
    styleUrls:["./person.component.css"]
})
export class PersonComponent{
    parr:Person[];
    p:Person={pid:0,pname:"",mobile:""};
    addUpdate="a";
    flagvar=false;
    constructor(private pservice:PersonService){
    }
    ngOnInit(){
        this.pservice.getAllPersons()
        .subscribe((r)=>this.parr=r);
    }
    onAddClick(){
        this.flagvar=true;
    }
    submitForm(){
        if(this.addUpdate=="a"){
        this.pservice.addPerson(this.p)
        .subscribe((r)=>this.parr=r);
        this.flagvar=false;
        }
        else{
            this.pservice.updatePerson(this.p)
            .subscribe((r)=>this.parr=r);
            this.addUpdate="a";
            this.p={pid:0,pname:"",mobile:""};
            this.flagvar=false;
        }
    }
    onUpdate(p1:Person,flag){
        this.addUpdate=flag;
        this.flagvar=true;
        this.p.pid=p1.pid;
        this.p.pname=p1.pname;
        this.p.mobile=p1.mobile;
    }

    /*deletePerson(id:Number){
        this.pservice.deletePerson(id)
        .subscribe((r)=>this.parr=r);
    }*/
}