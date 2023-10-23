import { Component, OnInit } from '@angular/core';
import { DataService } from './services/data.service';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
})
export class AppComponent implements OnInit {
  constructor(private _data: DataService) {}
  title: string = '';
  output = '';
  ngOnInit(): void {
    this.title = this._data.getStudentList();
  }

  onEventHandle(x: string) {
    console.log(x);
    this.output = x;
  }
}
